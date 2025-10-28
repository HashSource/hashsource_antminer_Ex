int __fastcall json_dump_callback(_DWORD *a1, int (__fastcall *a2)(const char *, int, int), int a3, int a4)
{
  _BYTE v10[28]; // [sp+18h] [bp-24h] BYREF
  int v11; // [sp+34h] [bp-8h]

  if ( (a4 & 0x200) == 0 && (!a1 || *a1 != 1) && (!a1 || *a1) )
    return -1;
  if ( hashtable_init((hashtable_t *)v10) )
    return -1;
  v11 = sub_4BF78(a1, a4, 0, (hashtable_t *)v10, a2, a3);
  hashtable_close((hashtable_t *)v10);
  return v11;
}
