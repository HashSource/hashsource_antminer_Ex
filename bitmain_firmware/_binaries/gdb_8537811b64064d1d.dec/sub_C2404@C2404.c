int __fastcall sub_C2404(int a1)
{
  int result; // r0

  do
  {
    result = *(_DWORD *)(a1 + 8);
    if ( result )
      break;
    a1 = *(_DWORD *)(a1 + 12);
  }
  while ( a1 );
  return result;
}
