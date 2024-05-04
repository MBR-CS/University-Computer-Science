program polynomial;

type
    poly = record
        a : integer;

        n : integer;
    end;
    PNode = ^Node;
    Node = record
        value: poly;
        next: PNode;
    end;

function CreatePolyLLL(BigPoly: integer): PNode;
var
    p, q, l: PNode;
    i: integer;
    n: integer;
begin
    n := BigPoly;
    new(p);
    WriteLn('Please enter AX^',n, ': ');
    Read(p^.value.a);
    p^.value.n := n;
    n := n - 1;
    p^.next := nil;
    l := p;
    q := p;

    for i := 2 to Round(BigPoly) + 1 do
    begin
        new(p);
        if i > Round(BigPoly) then
            WriteLn('Please enter C : ')
        else
            WriteLn('Please enter AX^',n, ': ');
        Read(p^.value.a);
        p^.value.n := n;
        n := n - 1;
        p^.next := nil;
        q^.next := p;
        q := p;
    end;

    CreatePolyLLL := l;
end;

procedure CalculateDerivative(Head: PNode);
var
    p: PNode;
begin
    p := Head;
    while p <> nil do
    begin
        p^.value.a := p^.value.a * p^.value.n;
        p^.value.n := p^.value.n - 1;
        p := p^.next;
    end;
end;

procedure Display(Head: PNode);
var
    p: PNode;
begin
    p := Head;
    while p <> nil do
    begin
        if p^.value.a > 0 then
            if p^.value.n = 0 then
                Write(p^.value.a)
            else
                Write(p^.value.a,'X^',p^.value.n,' + ');
        p := p^.next;
    end;
    WriteLn
end;

var
    ppoly: integer;
    head: PNode;
begin
    Write('Please enter a big poly:');
    Read(ppoly);
    head := CreatePolyLLL(ppoly);
    CalculateDerivative(head);
    WriteLn('Derivative is :');
    Display(head);
end.
