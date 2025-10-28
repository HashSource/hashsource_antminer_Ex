void sub_20686C()
{
  int v0; // [sp+0h] [bp-Ch]
  unsigned __int8 i; // [sp+7h] [bp-5h]

  if ( dword_C25F58 )
  {
    for ( i = 0; i < dword_C25F9C; ++i )
    {
      v0 = dword_C25F5C[i];
      if ( *(_DWORD *)(dword_C25F58 + 4 * v0) )
      {
        free(*(void **)(dword_C25F58 + 4 * v0));
        *(_DWORD *)(dword_C25F58 + 4 * v0) = 0;
      }
    }
    free((void *)dword_C25F58);
    dword_C25F58 = 0;
  }
}
