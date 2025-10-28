int __fastcall sub_17C6A0(int a1)
{
  int i; // r3

  for ( i = a1; i; i = *(_DWORD *)(i + 12) )
  {
    if ( *(_DWORD *)(i + 8) )
      JUMPOUT(0x17C608);
  }
  return 0;
}
