program OccRepLLL;

type
    PNode = ^Node;
    Node = record
        value: integer;
        next: PNode;
    end;
function InitLLL(Len : integer): PNode;
var
    p,q,l:PNode;
    i : integer;

begin
    new(p);
    Read(p^.value);
    p^.next := nil;
    l := p;
    q := p;

    for i := 2 to Len do
    begin
        new(p);
        Read(p^.value);
        p^.next := nil;
        q^.next := p;
        q := p;
    end;
    InitLLL := l ;
end;

// this function you can take parameter of Node pointer (head the first element in list)
//of lll
//and after excute code block you can return length lll

function Length(Head : PNode):integer;
// write code block
var
    p : PNode;
    COUNT  : integer;
begin
    p:=Head;
    COUNT := 0;
    while p <> nil do

    begin
        // you can use a ready function like <procedure Inc ( var Variable : Ordinal variable; Count : Integer )>
        // like this Inc(COUNT) and a defeult count is 1
        COUNT := COUNT + 1;
        p := p^.next;
    end;
    Length := COUNT;
end;

var
    H : PNode;
    result, N : integer;
begin
    Write('Please enter length LLL');

    Read(N);


    H := InitLLL(5);

    result := Length(H);
    WriteLn('length LLL is : ',result);
end.
