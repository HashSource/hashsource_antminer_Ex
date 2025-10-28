int sub_1F8D4()
{
  int result; // r0
  const char *v1; // r4
  int v2; // r0
  _DWORD v3[7]; // [sp+14h] [bp-1Ch] BYREF

  while ( 1 )
  {
    sub_16F67C();
    result = ((int (*)(void))loc_163ED8)();
    if ( *(_DWORD *)(result + 12) != 39 )
      return result;
    sub_B8690(v3);
    result = sub_B81D0(v3[0], v3[1], v3[2], v3[3], v3[4], v3[5], v3[6]);
    if ( result )
      return result;
    sub_94728("arm-tdep.c", 8386, "could not update architecture");
    v1 = off_469624;
    v2 = strcmp(off_469624, "auto");
    if ( !v2 )
      goto LABEL_10;
    if ( strcmp(v1, "APCS") )
    {
      if ( !strcmp(v1, "AAPCS") )
      {
        v2 = 2;
        goto LABEL_10;
      }
      sub_94728("arm-tdep.c", 8440, "Invalid ABI accepted: %s.", v1);
    }
    v2 = 1;
LABEL_10:
    dword_4714E8 = v2;
  }
}
