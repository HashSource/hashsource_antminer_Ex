int __fastcall bitmain_power_read(__int16 a1, int a2, int a3)
{
  int v6; // r5
  unsigned __int8 *v7; // r0
  int v8; // r3
  int v9; // r4
  char v10; // t1
  int v12; // r0
  int v13; // r0
  int v14; // r2
  int v15; // r0
  int v16; // [sp+14h] [bp-183Ch] BYREF
  char v17; // [sp+18h] [bp-1838h]
  char v18; // [sp+19h] [bp-1837h]
  __int16 v19; // [sp+1Ah] [bp-1836h]
  unsigned __int8 v20[52]; // [sp+1Ch] [bp-1834h] BYREF
  char s[2048]; // [sp+50h] [bp-1800h] BYREF
  _BYTE v22[4096]; // [sp+850h] [bp-1000h] BYREF

  memset(v20, 0, 0x32u);
  v17 = a1;
  v18 = a3;
  v16 = 101100117;
  v19 = a3 + 12 + a1;
  if ( dword_16C64C )
  {
    v6 = 0;
  }
  else
  {
    v6 = sub_B71BC();
    if ( v6 < 0 )
    {
      v12 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_read");
      V_LOCK(v12);
      v13 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v13);
      v14 = 644;
LABEL_10:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/power/bitmain_power_APW9.c",
        166,
        "bitmain_power_read",
        18,
        v14,
        100,
        v22);
      return v6;
    }
  }
  if ( sub_B69D8(dword_16C648, (unsigned __int8 *)&v16, 8u, v20, a3 + 7) )
  {
    v6 = -2147482880;
    strcpy(s, "set DA conversion N failed\n");
    V_LOCK(*(_DWORD *)"n N failed\n");
    v15 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v15);
    v14 = 654;
    goto LABEL_10;
  }
  if ( a3 )
  {
    v7 = &v20[4];
    v8 = a2 - 1;
    v9 = a2 + (unsigned __int8)(a3 - 1);
    do
    {
      v10 = *++v7;
      *(_BYTE *)++v8 = v10;
    }
    while ( v8 != v9 );
  }
  return v6;
}
