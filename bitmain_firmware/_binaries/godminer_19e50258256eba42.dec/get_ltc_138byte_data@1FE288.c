int __fastcall get_ltc_138byte_data(_DWORD *a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // [sp+14h] [bp-10h] BYREF
  unsigned int addr_by_chainid_chipid_packageid; // [sp+18h] [bp-Ch]
  unsigned int i; // [sp+1Ch] [bp-8h]

  addr_by_chainid_chipid_packageid = get_addr_by_chainid_chipid_packageid(a3, a4, a2);
  v6 = 0;
  for ( i = addr_by_chainid_chipid_packageid; i < addr_by_chainid_chipid_packageid + 136; i += 4 )
  {
    ltc_read(i, &v6);
    v6 = sub_1FDB18(v6);
    *a1++ = v6;
  }
  ltc_read(i, &v6);
  LOWORD(v6) = sub_1FDB18(v6);
  *(_WORD *)a1 = v6;
  return 0;
}
