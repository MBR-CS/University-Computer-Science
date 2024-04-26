program RaiseSalaries;

const
  E = 2;

type
  Emp = record
    ID: integer;
    ServiceYear: integer;
    Salary: real;
    Name: string;
  end;
  Employees = array [1..E] of Emp;

procedure ReadData(var Data: Employees);
var
  i: integer;
begin
  for i := 1 to E do
  begin
    WriteLn('ID: ');
    ReadLn(Data[i].ID);
    WriteLn('Name: ');
    ReadLn(Data[i].Name);
    WriteLn('Salary: ');
    ReadLn(Data[i].Salary);
    WriteLn('Service Year: ');
    ReadLn(Data[i].ServiceYear);
  end;
end;

procedure UpSalary(var Data: Employees);
var
  i: integer;
begin
  for i := 1 to E do
  begin
    if (Data[i].ServiceYear >= 3) and (Data[i].ServiceYear <= 5) then
      Data[i].Salary := Data[i].Salary + 2000
    else if Data[i].ServiceYear > 5 then
      Data[i].Salary := Data[i].Salary + 4000;
  end;
end;

var
  DataEmp, NewData: Employees;

begin
  ReadData(DataEmp);
  UpSalary(DataEmp);

  WriteLn(DataEmp[1].Salary:0:2);
  WriteLn(DataEmp[2].Salary:0:2);
end.
