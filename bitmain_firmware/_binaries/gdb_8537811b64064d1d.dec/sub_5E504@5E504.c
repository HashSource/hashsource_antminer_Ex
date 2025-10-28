int __fastcall sub_5E504(int a1, int a2, int a3)
{
  int v6; // [sp+8h] [bp-8h] BYREF
  _BYTE v7[4]; // [sp+Ch] [bp-4h] BYREF

  v6 = 0;
  if ( sub_60314(&unk_359D58, a3, a2, &unk_359D4C, &v6, v7) != -1 || a3 - 2 != v6 )
    sub_94708("-target-file-put: Usage: LOCAL_FILE REMOTE_FILE");
  return sub_1F09CC(*(_DWORD *)(a2 + 4 * (a3 - 2)), *(_DWORD *)(a2 + 4 * (a3 - 2) + 4), 0);
}
