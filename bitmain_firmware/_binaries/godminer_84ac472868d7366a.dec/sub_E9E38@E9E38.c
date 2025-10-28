int __fastcall sub_E9E38(int result)
{
  unsigned int v1; // r3
  unsigned int v2; // r5
  unsigned __int64 v3; // kr08_8
  unsigned int v4; // r9
  unsigned int v5; // r2
  __int64 v6; // r4
  int v7; // r12
  __int64 v8; // kr10_8
  int v9; // r10
  unsigned int v10; // r8

  v1 = *(_DWORD *)(result + 12);
  v2 = *(_DWORD *)(result + 8);
  v3 = __PAIR64__(v1, v2) + *(_QWORD *)result;
  v4 = (*(__int64 *)(result + 8) >> 19) ^ HIDWORD(v3);
  v5 = ((v2 << 13) | (v1 >> 19)) ^ v3;
  v6 = *(_QWORD *)(result + 32);
  v7 = ((*(_DWORD *)(result + 24) << 16) | HIWORD(*(_DWORD *)(result + 28)))
     ^ (*(_DWORD *)(result + 24) + *(_DWORD *)(result + 16));
  v8 = *(_QWORD *)(result + 24) + *(_QWORD *)(result + 16);
  v9 = *(_DWORD *)(result + 32);
  v10 = (*(__int64 *)(result + 24) >> 16) ^ HIDWORD(v8);
  *(_DWORD *)(result + 20) = v8 + v5;
  LOBYTE(v6) = -(char)v6 & 0x3F;
  *(_DWORD *)(result + 4) = (__PAIR64__(v3, HIDWORD(v3)) + __PAIR64__(v10, v7)) >> 32;
  *(_DWORD *)(result + 8) = ((v5 << 17) | (v4 >> 15)) ^ (v8 + v5);
  *(_DWORD *)(result + 12) = ((v4 << 17) | (v5 >> 15)) ^ ((v8 + __PAIR64__(v4, v5)) >> 32);
  *(_DWORD *)(result + 16) = (v8 + __PAIR64__(v4, v5)) >> 32;
  *(_DWORD *)result = HIDWORD(v3) + v7;
  *(_DWORD *)(result + 28) = ((__PAIR64__(v10, v7) << v9 >> 32) | (v10 >> v6))
                           ^ ((__PAIR64__(v3, HIDWORD(v3)) + __PAIR64__(v10, v7)) >> 32);
  *(_DWORD *)(result + 24) = ((__PAIR64__(v10, v7) >> v6) | (v7 << v9)) ^ (HIDWORD(v3) + v7);
  return result;
}
