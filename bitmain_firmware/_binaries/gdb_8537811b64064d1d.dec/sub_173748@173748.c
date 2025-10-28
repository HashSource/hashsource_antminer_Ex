int __fastcall sub_173748(_DWORD *a1)
{
  int result; // r0

  result = sub_171280(a1);
  if ( result )
    return (**(char **)(result + 24) & 0xFFFFFFEF) == 9;
  return result;
}
