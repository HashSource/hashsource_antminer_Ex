void __fastcall sub_C1AD8(int a1)
{
  unsigned int *v1; // r3
  unsigned int v2; // r2
  unsigned int v3; // r2

  if ( a1 && *(_DWORD *)(a1 + 4) != -1 )
  {
    v1 = (unsigned int *)(a1 + 4);
    __dmb(0xBu);
    do
    {
      v2 = __ldrex(v1);
      v3 = v2 - 1;
    }
    while ( __strex(v3, v1) );
    if ( !v3 )
      json_delete((json_t *)a1);
  }
}
