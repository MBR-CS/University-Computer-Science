program CarPark;

// i need here create a type record for Car park user and another type i can used in this alogorithm :

type

  Time = array [1..2] of integer;
  Info = record
    // number of the space occupied by the vehicle, the entry time, the exit time and the price to be paid.
    AreaNumber : Integer;
    StartTime : Time;
    EndTime : Time;
    Price : Real;
  end;





// here creaet a var for using in sub-program

// here i need creaete a function for read data and calculates the price of a vehicle ticket  :
procedure ReadDataCalculate(var Information:Info);

    var
        DiffMin ,DiffHour,Price: Integer;


  begin
   WriteLn('Please enter Numebr of Area:');
   Read(Information.AreaNumber);
   WriteLn('Please enter StartTime (hour):');
   Read(Information.StartTime[1]);
   WriteLn('Please enter StartTime (min):');
   Read(Information.StartTime[2]);
   WriteLn('Please enter EndTime (hour):');
   Read(Information.EndTime[1]);
   WriteLn('Please enter EndTime (min):');
   Read(Information.EndTime[2]);

   DiffMin := ((60 - Information.StartTime[2])+ Information.EndTime[2]);
   DiffHour := (Information.EndTime[1] - Information.StartTime[1]);

   if (DiffMin >= 60) then
   begin
        DiffHour := DiffHour + (DiffMin div 60);
        DiffMin := DiffMin mod 60;
   end;
   if (DiffHour >= 1) then
   begin
        DiffHour := DiffHour -1;
   end;

   if (DiffHour >= 1) then

        Price := 100 +(((DiffHour-1) * 120) + (DiffMin * 2))

   else
        Price := 100 ;

   Information.Price := Price;





end;


procedure PrintTicket(Information:Info);

    begin
            WriteLn('Numebr of Area: ',Information.AreaNumber);
            WriteLn('StartTime : ',Information.StartTime[1],':',Information.StartTime[2]);
            WriteLn('EndTime : ',Information.EndTime[1],':',Information.EndTime[2]);
            WriteLn('Price (DA) :',Information.Price:0:2);
    end;

// here i need init sub-program
var
    CarInfo: Info;
begin
    ReadDataCalculate(CarInfo);
    PrintTicket(CarInfo);
end.
