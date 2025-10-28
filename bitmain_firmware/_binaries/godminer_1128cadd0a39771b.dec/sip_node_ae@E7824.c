unsigned int __fastcall sip_node_ae(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  _DWORD *v9; // r6
  int v10; // r9
  int v11; // r0
  int v12; // r0
  int v13; // r3
  int v14; // r0
  int v15; // r0
  int v16; // r0

  v9 = &dword_16D798[2 * a1];
  v10 = a8 | (2 * a7);
  *((_QWORD *)v9 + 12) = a4;
  v9[16] = a5 ^ v10;
  v9[17] = a6;
  *(_QWORD *)v9 = a3;
  *((_QWORD *)v9 + 4) = a2;
  v11 = sub_E773C(a1);
  v12 = sub_E773C(v11);
  v13 = v9[24] ^ 0xFF;
  v9[8] ^= v10;
  v9[24] = v13;
  v14 = sub_E773C(v12);
  v15 = sub_E773C(v14);
  v16 = sub_E773C(v15);
  return (((v9[8] ^ dword_16D798[2 * sub_E773C(v16)] ^ v9[24] ^ v9[16]) << 17)
        | (((unsigned int)(v9[9] ^ v9[1]) ^ v9[25] ^ v9[17]) >> 15))
       & 0x1FFFFFFF;
}
