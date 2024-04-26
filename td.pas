program CalculatePower;

function Power(x: Real; n: Integer): Real;
begin
  if n = 0 then
    Power := 1
  else if n mod 2 = 0 then
    Power := Sqr(Power(x, n div 2))
  else
    Power := x * Power(x, n - 1);
end;

var
  x: Real;
  n: Integer;

begin
  Write('Enter a real number (x): ');
  ReadLn(x);
  Write('Enter a natural number (n): ');
  ReadLn(n);

  WriteLn(x, ' raised to the power of ', n, ' is ', Power(x, n));
end.
