int __fastcall lzo1_info(_DWORD *a1, int *a2, int a3, int a4)
{
  int result; // r0

  if ( a1 )
  {
    a4 = 5;
    *a1 = 5;
  }
  if ( a2 )
    a4 = 1;
  result = 0x8000;
  if ( a2 )
    *a2 = a4;
  return result;
}
