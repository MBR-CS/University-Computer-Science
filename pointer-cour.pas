program Pointer;

type
    Node = record
        value: integer;
        next: ^Node;
    end;

var
    l, p, q: ^Node;
    i: integer;

procedure show(head: ^Node);
begin
    p := head; // Assign the address of the head node to p
    while p <> nil do
    begin
        WriteLn('Done:');
        WriteLn(p^.value);
        p := p^.next;
    end;
end;



begin
    new(p);
    Read(p^.value);
    p^.next := nil;
    l := p;
    q := p;

    for i := 1 to 3 do
    begin
        new(p);
        Read(p^.value);
        p^.next := nil;
        q^.next := p;
        q := p;
    end;
    show(l);

end.
