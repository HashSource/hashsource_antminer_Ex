_DWORD *__fastcall sub_2BBF84(int a1, char *s2)
{
  const char *v2; // r3
  _DWORD *v4; // r5
  int v5; // r4
  const char *v7; // r3
  int v8; // r4

  v2 = "R_ARM_NONE";
  v4 = dword_415334;
  v5 = 0;
  while ( 1 )
  {
    v4 += 13;
    if ( v2 && !strcasecmp(v2, s2) )
      return &dword_415334[13 * v5];
    if ( ++v5 == 136 )
      break;
    v2 = (const char *)v4[8];
  }
  if ( !strcasecmp("R_ARM_IRELATIVE", s2) )
    return &unk_41377C;
  v7 = "R_ARM_RREL32";
  v8 = 0;
  while ( !v7 || strcasecmp(v7, s2) )
  {
    if ( ++v8 == 4 )
      return 0;
    v7 = (const char *)dword_4137B0[13 * v8 + 8];
  }
  return &dword_4137B0[13 * v8];
}
