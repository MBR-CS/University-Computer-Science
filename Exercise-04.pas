program DiffAction;
type

    Node = record
        Value : integer;
        Next : ^Node;
    end;


/* Note : why i changed between function and procedure
because the function can't return empty parameture but procedure you can do that action
*/

/* Sort : you can  use bubble sort or another method (algorithm)
this url you can explain all method <https://www.geeksforgeeks.org/sorting-algorithms/>
*/

// here i didn't need return any think because the action here is sorted not check sorted


procedure Sort(Head: Node);
var

begin


end;


// Invert :

procedure Invert(HeadL1: Node ; var HeadL2: Node);

var

begin


end;
// Merge :
procedure Merge(HeadL1,HeadL2: Node; var HeadL3 : Node);
var

begin


end;


/* Explode :
 my choice here is even and odd numbers
<explain : L1 lll form even number and L2 form odd number>
*/
procedure Explode(HeadL:  Node ; var HeadEvenL1, HeadOddL2:Node);

var

begin


end;

// Delete :

procedure Delete(HeadL1 : Node ; Var HeadL2: Node);


var



begin


end;
// Check :
// explain this action :  (B sub A) == (length A > length B)
// explain this action : (B sub A) == all value B in list A
function CheckSub(HeadA,HeadB: Node):boolean;
var

begin


end;






var

begin

end;
