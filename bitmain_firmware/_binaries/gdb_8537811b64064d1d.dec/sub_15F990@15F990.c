int __fastcall sub_15F990(int a1)
{
  _DWORD *v2; // r3

  do
  {
    v2 = *(_DWORD **)(a1 + 16);
    if ( !v2 )
    {
      sub_160DFC(a1, a1 + 12);
      v2 = *(_DWORD **)(a1 + 16);
    }
    if ( (unsigned int)(*v2 - 2) > 1 )
      break;
    a1 = sub_15F8C8(a1);
  }
  while ( a1 );
  return a1;
}
