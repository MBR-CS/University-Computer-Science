program DLMD ;
type
candidate = record
    ID : integer;
    First ,Last: string;
    SP , CM , GP : real;
end;
    PNode = ^Node;
    Node = record
        value: candidate;
        next: PNode;
    end;



function Average(SP,CM: real):real;
    var
        GP :real;
    begin
    // Note: GA = (3 * SP + CM ) / 4
    GP := (3 * SP + CM ) / 4;
    Average := GP;
    end;


function InitLLL(Len : integer): PNode;
        var
            p,l:PNode;
            i : integer;
            AverageResult : real;
        begin
            l := nil ;
            for i := 1 to Len do
            begin
                new(p);
                with p^.value do
                        begin
                            // Input candidate details
                            WriteLn('ID');
                            Read(ID);
                            WriteLn('First');
                            Read(First);
                            WriteLn('Last');
                            Read(Last);
                            WriteLn('SP');
                            Read(SP);
                            WriteLn('CM');
                            Read(CM);

                            // Calculate the average and assign it to GP
                            GP := Average(SP, CM);
                end;
                p^.next := l;
                l := p;
                WriteLn('-------------------------------');
            end;
            InitLLL := l ;
        end;



procedure Display(Head:PNode);
var
    p :PNode;
begin
p := Head;
while p <> nil do
begin
    WriteLn('average is: ' ,p^.value.GP:0:2,'ID: ',p^.value.ID);
    p := p^.next;
end;
end;


begin


Display(InitLLL(1));
end.
