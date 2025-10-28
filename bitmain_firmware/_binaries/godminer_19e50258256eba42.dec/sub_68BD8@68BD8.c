int *__fastcall sub_68BD8(int *a1, int a2, int a3, unsigned int a4)
{
  int *result; // r0
  int v6; // [sp+24h] [bp-1008h] BYREF
  int v7; // [sp+28h] [bp-1004h] BYREF
  unsigned int i; // [sp+1024h] [bp-8h]

  result = &v7;
  if ( a1 && a2 && a3 )
  {
    for ( i = 0; i < a4; ++i )
    {
      result = a1;
      *((_BYTE *)a1 + i) = *(_BYTE *)(a3 + (i & 0x1F)) ^ *(_BYTE *)(a2 + (i & 0x1F));
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(&v6, 0x1000u, 0, "%s input value error", "hns_padding");
    V_UNLOCK();
    return (int *)zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                    164,
                    "hns_padding",
                    11,
                    82,
                    100,
                    &v6);
  }
  return result;
}
