program FreqCharLLL;

type
    PNode = ^Node;
    Node = record
        value: char;
        next: PNode;
    end;


function InitLLL(Len : integer): PNode;
var
    p,l:PNode;
    i : integer;

begin
    l := nil ;
    for i := 1 to Len do
    begin
        new(p);
        Read(p^.value);
        p^.next := l;
        l := p;
    end;
    InitLLL := l ;
end;

function Frequency(Head:PNode;C:char):integer;
// write code block
var
    p : PNode;
    count  : integer;
begin
    p := Head;
    count:= 0;
    while p <> nil do
    begin
        if p^.value = C then
        begin
            count := count +1;
        end;
    p := p^.next;
    end;
     Frequency := count;
end;

function MostFrequency(head : PNode):char;
var
    most ,element: char;
    count,check : integer;
    p : PNode;

begin
 count := 0;
 p := head;
 while p <> nil do
 begin
    element :=  p^.value;
    check := Frequency(p,element);
    if check > count then
    begin
        count := check;
        most := element;
    end;
    p := p^.next;

  end;
    MostFrequency := most;

end;

var
    H : PNode;
    C,mostfreq: char ;
    Counter, N : integer;
begin
    // initilaize LLL
    WriteLn('Please enter length LLL: ');
    Read(N);
    H := InitLLL(N);
    WriteLn('Please enter Char C: ');
    Read(C);
    Counter := Frequency(H,C);
    WriteLn('Occ:', Counter);
    mostfreq := MostFrequency(H);
    WriteLn('the most Frequency is : ',mostfreq);


end.
