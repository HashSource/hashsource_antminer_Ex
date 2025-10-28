int __fastcall sub_12FF70(int a1, int a2)
{
  int result; // r0

  result = sub_12E6BC(a1, 60, a2);
  if ( result )
    return *(_QWORD *)(result + 8) && sub_12E6BC(a1, 71, a2) == 0;
  return result;
}
