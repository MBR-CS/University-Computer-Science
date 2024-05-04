program DiffAction;
type
    PNode = ^Node;
    Node = record
        value: integer;
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






// Note : why i changed between function and procedure
//because the function can't return empty parameture but procedure you can do that action
// Sort : you can  use bubble sort or another method (algorithm)
//this url you can explain all method <https://www.geeksforgeeks.org/sorting-algorithms/>
// here i didn't need return any think because the action here is sorted not check sorted


procedure Sort(Head: PNode);
var
    p ,p2,q :PNode ;
    length,g : integer;
begin
length := 0;
p := Head;
// var for use in sorted
p2 := Head;
q := p^.next;
while p <> nil do
begin
p := p^.next;
Inc(length)
end;

// action sorted :
    for i := 0 to length -1 do
    begin
        for j := 0 to length - i -1 do
        begin
        if p^.value > q^.value then
            g := p^.value;
            p^.value := q^.value;
            q^.value := g;
            p := q;
        q :=  q^.next;
        end;
        p2 := p^.next;
        q :=  p^.next;
    end;



end;







var
    h :PNode;
    result , length : integer;
begin
WriteLn('please enter a length for lll: ');
Read(length);

h := InitLLL(length);
result := Sort(h);
WriteLn('your length is :', result);






end.
