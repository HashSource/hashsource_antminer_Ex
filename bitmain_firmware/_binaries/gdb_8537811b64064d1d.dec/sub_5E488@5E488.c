int __fastcall sub_5E488(int a1, int a2, int a3)
{
  int v6; // [sp+8h] [bp-8h] BYREF
  _BYTE v7[4]; // [sp+Ch] [bp-4h] BYREF

  v6 = 0;
  if ( sub_60314(&unk_359D38, a3, a2, &unk_359D2C, &v6, v7) != -1 || a3 - 2 != v6 )
    sub_94708("-target-file-get: Usage: REMOTE_FILE LOCAL_FILE");
  return sub_1F0CD4(*(_DWORD *)(a2 + 4 * (a3 - 2)), *(_DWORD *)(a2 + 4 * (a3 - 2) + 4), 0);
}
