program SortingLinkedList;

type 
    Pnode = ^Node;
    Node = record
        value: integer;
        next: Pnode;
    end;

function InitLinkedListLinear(length: integer): Pnode;
var
    p, l, h: Pnode;
    i: integer;
begin
    WriteLn('Please enter your numbers: ');
    new(h);
    Read(h^.value);
    h^.next := nil;
    l := h;
    for i := 1 to length - 1 do
    begin
        new(p);
        Read(p^.value);
        p^.next := nil;
        l^.next := p;
        l := p;
    end;
    InitLinkedListLinear := h;
end;

procedure DisplayLLL(head: Pnode);
var 
    l: Pnode;
begin
    l := head;
    while l <> nil do 
    begin
        Write(l^.value, ' ');
        l := l^.next;
    end;
end;

procedure Sort(head: Pnode; length: integer);
var
    swapped: boolean;
    p, l, prev: Pnode;
    temp: integer;
begin
    if head = nil then exit;  // Exit if the list is empty
    repeat
        swapped := true;
        p := head;
        l := head^.next;
        prev := nil;
        while l <> nil do
        begin
            if p^.value > l^.value then
            begin
                swapped := false;
                temp := p^.value;
                p^.value := l^.value;
                l^.value := temp;
            end;
            prev := p;
            p := l;
            l := l^.next;
        end;
    until  swapped;
end;

var
    head: Pnode;

begin
    head := InitLinkedListLinear(5);
    WriteLn('Before sorting:');
    DisplayLLL(head);
    WriteLn;
    Sort(head, 5);
    WriteLn('After sorting:');
    DisplayLLL(head);
end.

