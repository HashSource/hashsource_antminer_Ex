int __fastcall get_epoch_number_rvn(const void *a1)
{
  _DWORD v4[8]; // [sp+Ch] [bp-48h] BYREF
  _DWORD s[8]; // [sp+2Ch] [bp-28h] BYREF
  int i; // [sp+4Ch] [bp-8h]

  memset(s, 0, sizeof(s));
  for ( i = 1; i < 2048; ++i )
  {
    sub_A7960((int)v4, (int)s, 0x20u);
    s[0] = v4[0];
    s[1] = v4[1];
    s[2] = v4[2];
    s[3] = v4[3];
    s[4] = v4[4];
    s[5] = v4[5];
    s[6] = v4[6];
    s[7] = v4[7];
    if ( !memcmp(s, a1, 0x20u) )
      break;
  }
  if ( i == 2048 )
    return 0;
  if ( i > 525 )
    return i / 2;
  return i;
}
