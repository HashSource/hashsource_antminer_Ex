int __fastcall sub_539B4(char *a1, int a2, int a3)
{
  int result; // r0
  int v5; // r3

  result = sub_52DE0(a1, 5, a3, (int **)&dword_474754);
  *(_DWORD *)(result + 20) = a2;
  if ( a2 )
    LOWORD(v5) = 11368;
  else
    *(_DWORD *)(result + 16) = 0;
  if ( a2 )
  {
    HIWORD(v5) = 5;
    *(_DWORD *)(result + 16) = v5;
  }
  return result;
}
