int __fastcall get_sols_ae(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int *a12,
        int a13)
{
  int *v13; // r8
  int v15; // r6
  char *v16; // r5
  unsigned int v17; // r0
  int v18; // t1
  unsigned int v19; // r4
  unsigned int v20; // r0
  char *v21; // r3
  unsigned int v22; // r0
  char *v24; // [sp+24h] [bp-10h]
  int v25; // [sp+2Ch] [bp-8h]

  v25 = (unsigned __int8)gSols[172 * a1];
  if ( gSols[172 * a1] && a13 > 0 )
  {
    v13 = a12;
    v15 = 0;
    v16 = (char *)&unk_16F720 + 336 * a1;
    v24 = (char *)&gEdges + 336 * a1 + 4;
    do
    {
      v17 = sip_node_ae(a1, a10, a3, a4, a5, a6, a7, a8, a9, a10, *v13, 0);
      v18 = *v13++;
      v19 = v17 >> 1;
      v20 = sip_node_ae(a1, a10, a3, a4, a5, a6, a7, a8, a9, a10, v18, 1);
      v21 = v24;
      v22 = v20 >> 1;
      do
      {
        if ( v19 == *((_DWORD *)v21 - 1) && v22 == *(_DWORD *)v21 )
          *(_DWORD *)(a11 + 4 * v15++) = *(v13 - 1);
        v21 += 8;
      }
      while ( v21 != v16 );
    }
    while ( v13 != &a12[a13] );
  }
  return v25;
}
