int __fastcall sub_E61C4(int result)
{
  unsigned int v1; // r12
  _DWORD *v2; // r3
  unsigned int v3; // r9
  unsigned int v4; // r2
  unsigned int v5; // lr
  unsigned int v6; // r1
  __int64 v7; // r4
  unsigned int v8; // r12
  __int64 v9; // kr10_8
  __int64 v10; // r4

  v1 = dword_16C780[2 * result];
  v2 = &dword_16C780[2 * result];
  v3 = v2[1];
  v4 = (__PAIR64__(v3, v1) + *((_QWORD *)v2 + 4)) >> 32;
  v5 = v1 + v2[8];
  v6 = ((v1 << 13) | (v3 >> 19)) ^ v5;
  v7 = *((_QWORD *)v2 + 8) << 16;
  v8 = ((v3 << 13) | (v1 >> 19)) ^ v4;
  LODWORD(v7) = v7 | HIWORD(v2[17]);
  v9 = *((_QWORD *)v2 + 8) + *((_QWORD *)v2 + 12);
  v10 = v7 ^ v9;
  v2[25] = v9 + v6;
  v2[9] = (__PAIR64__(v5, v4) + v10) >> 32;
  *v2 = ((v6 << 17) | (v8 >> 15)) ^ (v9 + v6);
  v2[8] = v4 + v10;
  v2[1] = ((v8 << 17) | (v6 >> 15)) ^ ((v9 + __PAIR64__(v8, v6)) >> 32);
  v2[24] = (v9 + __PAIR64__(v8, v6)) >> 32;
  v2[17] = (v10 >> 11) ^ ((__PAIR64__(v5, v4) + v10) >> 32);
  v2[16] = (((_DWORD)v10 << 21) | (HIDWORD(v10) >> 11)) ^ (v4 + v10);
  return result;
}
