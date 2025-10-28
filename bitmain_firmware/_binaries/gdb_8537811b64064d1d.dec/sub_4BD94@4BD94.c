int __fastcall sub_4BD94(int a1, int a2)
{
  int v4; // r3
  int result; // r0

  v4 = sub_4B950(a1);
  if ( v4 > 0 )
    sub_920D8(a2, "process %d is already traced by process %d", a1, v4);
  result = sub_4BA08(a1);
  if ( result )
    return sub_920D8(a2, "process %d is a zombie - the process has already terminated", a1);
  return result;
}
