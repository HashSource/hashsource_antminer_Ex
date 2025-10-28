void __fastcall sub_158510(unsigned int *a1)
{
  _DWORD *v2; // r5
  unsigned int v3; // r4
  int v4; // t1

  if ( a1 )
  {
    if ( *a1 )
    {
      v2 = a1 + 1;
      v3 = 0;
      do
      {
        v4 = v2[1];
        ++v2;
        ++v3;
        ((void (__fastcall *)(int))loc_1584AC)(v4);
      }
      while ( v3 < *a1 );
    }
    free(a1);
  }
}
