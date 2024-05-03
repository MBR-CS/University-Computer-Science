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






function Length(Head : PNode):integer;
// write code block
var
    p : PNode;
    COUNT  : integer;
begin
    p:=Head;
    COUNT := 0;
    while (p <> nil) do

    begin
        // you can use a ready function like <procedure Inc ( var Variable : Ordinal variable; Count : Integer )>
        // like this Inc(COUNT) and a defeult count is 1
        COUNT := COUNT + 1;
        p := p^.next;
    end;
    Length := COUNT;
end;


function OccPosition(x,Len:integer;Head : PNode):integer;
var
    p : PNode;
    position, i  : integer;
begin
    p := Head;
    for i := 1 to Len do
    begin
        if (p^.value = x) then
        begin
            position := i;
        end;
        p := p^.next;
    end;

    OccPosition := position;
end;


procedure OccReplace(x,y,Len:integer;Head : PNode);
var
    p : PNode;
    i  : integer;
begin
    p := Head;
    for i := 1 to Len do
    begin
        if (p^.value = x) then
        begin
            p^.value := y;

        end;
        WriteLn('new value',p^.value);
        p := p^.next;
    end;


end;





var
    H : PNode;
    result, N,x ,position,y: integer;
begin
    // initilaize LLL
    WriteLn('Please enter length LLL: ');
    Read(N);
    H := InitLLL(N);

    // Call function Length and display length LLL
    result := Length(H);
    WriteLn('length LLL is : ',result);

    // Call function OccPosition and display  position for input user
    WriteLn('Please enter x:');
    Read(x);
    position := OccPosition(x,N,H);
    WriteLn('Position:',position);

    // Call function OccReplace and replace all value x from user
    WriteLn('Please enter x:');
    Read(x);
    WriteLn('Please enter y:');
    Read(y);
    OccReplace(x,y,N,H);

end.
