int __fastcall pic1704_get_all_voltage(char a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int result; // r0
  unsigned __int16 v8; // r3
  unsigned __int16 v9; // r12
  int v10; // r0
  int v11; // r0
  int v12; // [sp+10h] [bp-1818h] BYREF
  int v13; // [sp+14h] [bp-1814h]
  int v14; // [sp+18h] [bp-1810h]
  _DWORD v15[3]; // [sp+1Ch] [bp-180Ch] BYREF
  char s[2040]; // [sp+28h] [bp-1800h] BYREF
  _BYTE v17[4096]; // [sp+828h] [bp-1000h] BYREF

  HIBYTE(v13) = a1;
  BYTE2(v13) = 11;
  v14 = 0;
  LOWORD(v13) = 55;
  v15[0] = 255;
  v15[1] = 0;
  v12 = 0;
  *(_DWORD *)((char *)&v15[1] + 3) = 0;
  result = sub_9B17C(v13, 0, (int)&v12, (unsigned __int8 *)v15);
  if ( result )
  {
    v8 = __rev16(*(unsigned __int16 *)((char *)&v15[1] + 1));
    v9 = __rev16(*(unsigned __int16 *)((char *)&v15[1] + 3));
    *a2 = (unsigned __int16)__rev16(*(unsigned __int16 *)((char *)v15 + 3));
    *a3 = v8;
    *a4 = v9;
    v10 = snprintf(s, 0x800u, "Received all voltage response: vol0 = %d, vol1 = %d, vol2 = %d.", *a2, *a3, v9);
    V_LOCK(v10);
    v11 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      164,
      "pic1704_get_all_voltage",
      23,
      513,
      20,
      v17);
    return 1;
  }
  return result;
}
