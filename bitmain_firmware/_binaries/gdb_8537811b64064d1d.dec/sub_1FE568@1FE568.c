void __fastcall sub_1FE568(_BYTE *a1, int a2, int a3)
{
  int v4; // r4
  int v5; // r9
  int *v6; // r7
  void *v7; // r0
  void *v8; // r0
  void *v9; // r0

  v4 = dword_48938C;
  if ( (int *)dword_48938C == &dword_48938C )
    goto LABEL_15;
  v5 = 0;
  do
  {
    while ( a1 && !sub_5AFA4(a1, *(_DWORD *)(v4 + 8), a3) )
    {
      v4 = *(_DWORD *)v4;
      if ( (int *)v4 == &dword_48938C )
        goto LABEL_14;
    }
    v6 = *(int **)v4;
    --dword_489394;
    sub_33ACF8(v4);
    if ( *(_BYTE *)(v4 + 100) )
    {
      *(_BYTE *)(v4 + 100) = 0;
      sub_163764((regex_t *)(v4 + 68));
    }
    v7 = *(void **)(v4 + 44);
    if ( v7 != (void *)(v4 + 52) )
      sub_339E8C(v7);
    v8 = *(void **)(v4 + 16);
    if ( v8 != (void *)(v4 + 24) )
      sub_339E8C(v8);
    v9 = (void *)v4;
    v4 = (int)v6;
    sub_339E8C(v9);
    v5 = 1;
  }
  while ( v6 != &dword_48938C );
LABEL_14:
  if ( !v5 )
LABEL_15:
    sub_94708("No skiplist entries found with number %s.", a1);
}
