__int64 __fastcall sub_E7938(int a1, int a2)
{
  __int64 v4; // r4
  _QWORD *v5; // r6
  int v6; // r0
  _QWORD v8[64]; // [sp+0h] [bp-200h] BYREF

  memset(v8, 0, sizeof(v8));
  v4 = a2 & 0xFFFFFFC0;
  v5 = v8;
  (*(void (**)(void))(*(_DWORD *)(a1 + 92) + 84))();
  do
  {
    (*(void (**)(void))(*(_DWORD *)(a1 + 92) + 80))();
    *v5++ = ((__int64 (*)(void))*(_DWORD *)(*(_DWORD *)(a1 + 92) + 76))();
    ++v4;
  }
  while ( &v8[63] != v5 );
  (*(void (**)(void))(*(_DWORD *)(a1 + 92) + 80))();
  v6 = *(_DWORD *)(a1 + 92);
  v8[63] = 0;
  return ((__int64 (*)(void))*(_DWORD *)(v6 + 76))() ^ v8[a2 & 0x3F];
}
