int __fastcall json_dumpfd(_DWORD *a1, int a2, int a3)
{
  _DWORD v4[2]; // [sp+8h] [bp-Ch] BYREF

  v4[1] = a1;
  v4[0] = a2;
  return json_dump_callback(a1, (int (__fastcall *)(const char *, int, int))sub_4B9D4, (int)v4, a3);
}
