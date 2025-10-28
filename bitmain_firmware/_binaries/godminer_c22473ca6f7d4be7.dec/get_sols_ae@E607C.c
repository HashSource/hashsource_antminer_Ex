int __fastcall get_sols_ae(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7, int *a8, int a9)
{
  int v10; // r12
  int *v11; // r8
  int v13; // r6
  char *v14; // r5
  unsigned int v15; // r0
  int v16; // t1
  unsigned int v17; // r4
  unsigned int v18; // r0
  char *v19; // r3
  unsigned int v20; // r0
  char *v22; // [sp+24h] [bp-10h]
  int v23; // [sp+2Ch] [bp-8h]

  LOWORD(v10) = -1284;
  HIWORD(v10) = (unsigned int)&unk_16E8FC >> 16;
  v23 = *(unsigned __int8 *)(v10 + 172 * a1);
  if ( *(_BYTE *)(v10 + 172 * a1) && a9 > 0 )
  {
    v11 = a8;
    v13 = 0;
    v14 = (char *)&unk_16F710 + 336 * a1;
    v22 = (char *)&gEdges + 336 * a1 + 4;
    do
    {
      v15 = sip_node_ae(a1, a2, a3, a4, a5, a6, *v11, 0);
      v16 = *v11++;
      v17 = v15 >> 1;
      v18 = sip_node_ae(a1, a2, a3, a4, a5, a6, v16, 1);
      v19 = v22;
      v20 = v18 >> 1;
      do
      {
        if ( v17 == *((_DWORD *)v19 - 1) && v20 == *(_DWORD *)v19 )
          *(_DWORD *)(a7 + 4 * v13++) = *(v11 - 1);
        v19 += 8;
      }
      while ( v19 != v14 );
    }
    while ( v11 != &a8[a9] );
  }
  return v23;
}
