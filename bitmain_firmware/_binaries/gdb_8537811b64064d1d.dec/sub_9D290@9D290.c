int __fastcall sub_9D290(const char **a1)
{
  char *v2; // r0
  int v3; // r2
  int v5; // [sp+0h] [bp-8h] BYREF

  v2 = sub_9D1B8(*a1, 0, (char *)1);
  if ( v2 )
  {
    v3 = *((_DWORD *)off_46DBB8 + 4 * ((unsigned __int8)v2[32] >> 3));
    if ( v3 != 10 )
      sub_94708("Symbol \"%s\" is not a function (class = %d)", *(const char **)v2, v3);
    return 1;
  }
  else
  {
    sub_1B1444((int)&v5, (char *)*a1);
    if ( v5 && (*(_BYTE *)(v5 + 32) & 0xF) != 7 )
      sub_94708(
        "Your Ada runtime appears to be missing some debugging information.\n"
        "Cannot insert Ada exception catchpoint in this configuration.");
    return 0;
  }
}
