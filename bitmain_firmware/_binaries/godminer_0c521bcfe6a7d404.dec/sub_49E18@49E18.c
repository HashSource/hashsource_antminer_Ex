unsigned int __fastcall sub_49E18(int a1, int a2, int a3, int a4)
{
  int v5; // r4
  int v6; // r3
  int v7; // r3
  unsigned int v8; // r5
  int v9; // r0
  _BYTE v11[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v5) = (unsigned __int16)&dword_171450;
  if ( a3 >= a4 )
  {
    HIWORD(v5) = (unsigned int)&dword_171450 >> 16;
    *(_DWORD *)(v5 + 4) = 0;
    goto LABEL_10;
  }
  HIWORD(v5) = (unsigned int)&dword_171450 >> 16;
  v6 = *(_DWORD *)(v5 + 4);
  if ( v6 > 120 )
  {
    *(_DWORD *)(v5 + 4) = 0;
    goto LABEL_10;
  }
  if ( !v6 )
  {
LABEL_10:
    v8 = 0;
    goto LABEL_11;
  }
  v7 = v6 + 1;
  if ( !a2 )
  {
LABEL_8:
    v8 = 20;
    *(_DWORD *)(v5 + 4) = v7;
    goto LABEL_11;
  }
  a1 = -858993459 * (a4 - a3 + 10);
  *(_DWORD *)(v5 + 4) = v7;
  v8 = 10 * ((a4 - a3 + 10) / 5u);
  if ( a2 <= 0 && v7 )
  {
    ++v7;
    goto LABEL_8;
  }
LABEL_11:
  V_LOCK(a1);
  v9 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    182,
    "calc_voltage_bias_kas_2380",
    26,
    76,
    20,
    v11);
  return v8;
}
