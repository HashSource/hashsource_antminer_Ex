unsigned int __fastcall sip_node_ae(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  int v9; // r8
  int v10; // r6
  int v11; // r9
  int v12; // r0
  int v13; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r0
  int v17; // r0

  LOWORD(v9) = -14464;
  HIWORD(v9) = (unsigned int)&unk_16B588 >> 16;
  v10 = v9 + 8 * a1;
  v11 = a8 | (2 * a7);
  *(_QWORD *)(v10 + 96) = a4;
  *(_DWORD *)(v10 + 64) = a5 ^ v11;
  *(_DWORD *)(v10 + 68) = a6;
  *(_QWORD *)v10 = a3;
  *(_QWORD *)(v10 + 32) = a2;
  v12 = sub_E61C4(a1);
  v13 = sub_E61C4(v12);
  v14 = *(_DWORD *)(v10 + 96) ^ 0xFF;
  *(_DWORD *)(v10 + 32) ^= v11;
  *(_DWORD *)(v10 + 96) = v14;
  v15 = sub_E61C4(v13);
  v16 = sub_E61C4(v15);
  v17 = sub_E61C4(v16);
  return (((*(_DWORD *)(v10 + 32) ^ *(_DWORD *)(v9 + 8 * sub_E61C4(v17)) ^ *(_DWORD *)(v10 + 96) ^ *(_DWORD *)(v10 + 64)) << 17)
        | (((unsigned int)(*(_DWORD *)(v10 + 36) ^ *(_DWORD *)(v10 + 4)) ^ *(_DWORD *)(v10 + 100) ^ *(_DWORD *)(v10 + 68)) >> 15))
       & 0x1FFFFFFF;
}
