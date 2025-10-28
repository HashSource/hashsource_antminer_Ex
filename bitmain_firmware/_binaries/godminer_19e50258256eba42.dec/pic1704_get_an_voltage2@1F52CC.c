int __fastcall pic1704_get_an_voltage2(char a1, char a2)
{
  float v2; // s0
  float v3; // s1
  int result; // r0
  int v5; // s15
  char v7[36]; // [sp+28h] [bp-1824h] BYREF
  _BYTE v8[36]; // [sp+828h] [bp-1024h] BYREF
  unsigned int v9; // [sp+1828h] [bp-24h] BYREF
  unsigned int v10; // [sp+182Ch] [bp-20h] BYREF
  int v11[2]; // [sp+1830h] [bp-1Ch] BYREF
  double v12; // [sp+1838h] [bp-14h]
  char v13; // [sp+1847h] [bp-5h]

  v11[0] = 0;
  v10 = 0;
  v9 = 0;
  result = pic1704_get_all_voltage(a1, v11, (int *)&v10, (int *)&v9);
  v13 = result;
  if ( (_BYTE)result )
  {
    strcpy(v7, "Received an voltage response.");
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      165,
      "pic1704_get_an_voltage2",
      23,
      482,
      20,
      v8);
    snprintf(
      v7,
      0x800u,
      "an0 = %f, an2 %f, an6 %f.",
      (double)(unsigned int)v11[0] * 3.3 / 1024.0,
      (double)v10 * 3.3 / 1024.0,
      (double)v9 * 3.3 / 1024.0);
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      165,
      "pic1704_get_an_voltage2",
      23,
      483,
      20,
      v8);
    if ( a2 )
    {
      v12 = (double)v9 * 3.3 / 1024.0;
      if ( v12 >= v2 && v12 <= v3 )
      {
        *(float *)&v5 = v12 / 2.5;
        v11[1] = v5;
        return sub_1F505C(v10);
      }
      else
      {
        strcpy(v7, "Ref an vol too high or too low.");
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, v7);
        V_UNLOCK();
        return zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godm"
                 "iner-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
                 165,
                 "pic1704_get_an_voltage2",
                 23,
                 489,
                 20,
                 v8);
      }
    }
    else
    {
      return sub_1F505C(v10);
    }
  }
  return result;
}
