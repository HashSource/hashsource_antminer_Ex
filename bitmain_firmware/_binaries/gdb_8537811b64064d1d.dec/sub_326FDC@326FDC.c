int __fastcall sub_326FDC(int *a1)
{
  int result; // r0

  result = *a1;
  if ( result )
  {
    while ( *(_DWORD *)(result + 8) )
      result = *(_DWORD *)(result + 8);
  }
  return result;
}
