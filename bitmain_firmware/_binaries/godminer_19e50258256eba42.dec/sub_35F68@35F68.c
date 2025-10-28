int *__fastcall sub_35F68(int *result, char *a2)
{
  int v2; // r3
  bool v3; // r3
  size_t v4; // r4
  int *v5; // r0
  char *v6; // r0
  bool v7; // r3
  int *v9; // [sp+14h] [bp-10C0h]
  fd_set v10; // [sp+1Ch] [bp-10B8h] BYREF
  _BYTE v11[56]; // [sp+9Ch] [bp-1038h] BYREF
  struct timeval timeout; // [sp+109Ch] [bp-38h] BYREF
  fd_set *v13; // [sp+10A4h] [bp-30h]
  int v14; // [sp+10A8h] [bp-2Ch]
  int v15; // [sp+10ACh] [bp-28h]
  int v16; // [sp+10B0h] [bp-24h]
  void *buf; // [sp+10B4h] [bp-20h]
  unsigned int i; // [sp+10B8h] [bp-1Ch]
  char *v19; // [sp+10BCh] [bp-18h]
  size_t n; // [sp+10C0h] [bp-14h]
  bool v21; // [sp+10C7h] [bp-Dh]

  v9 = result;
  v19 = 0;
  n = 0;
  v21 = 0;
  v15 = 0;
  v14 = 0;
  v16 = 0;
  buf = 0;
  if ( result && a2 )
  {
    result = (int *)strlen(a2);
    v19 = (char *)result + 1;
    buf = a2;
    n = (size_t)result + 1;
    while ( !v21 )
    {
      timeout.tv_sec = 0;
      timeout.tv_usec = 50000;
      v13 = &v10;
      for ( i = 0; i <= 0x1F; ++i )
        v13->__fds_bits[i] = 0;
      v2 = *v9 & 0x1F;
      if ( *v9 <= 0 )
        v2 = -(-*v9 & 0x1F);
      v10.__fds_bits[*v9 / 32] |= 1 << v2;
      v15 = select(*v9 + 1, 0, &v10, 0, &timeout);
      if ( v15 <= 0 )
      {
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, "%s: send select failed, ret = %d", "send_api_result", v15);
        V_UNLOCK();
        return (int *)zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bui"
                        "ld/godminer-origin_godminer-new/api_new.c",
                        137,
                        "send_api_result",
                        15,
                        2935,
                        100,
                        v11);
      }
      result = (int *)send(*v9, buf, n, 0);
      v14 = (int)result;
      if ( (int)result >= 0 )
      {
        n -= v14;
        buf = (char *)buf + v14;
        if ( !v14 )
          ++v16;
        v7 = (int)n <= 0 || v16 > 2;
        v21 = v7;
      }
      else
      {
        ++v16;
        if ( *_errno_location() != 11 && *_errno_location() != 11 )
        {
          V_LOCK();
          v4 = (size_t)&v19[-n];
          v5 = _errno_location();
          v6 = strerror(*v5);
          logfmt_raw(v11, 0x1000u, 0, "%s: send (%d:%d) failed %s", "send_api_result", v19, v4, v6);
          V_UNLOCK();
          return (int *)zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/b"
                          "uild/godminer-origin_godminer-new/api_new.c",
                          137,
                          "send_api_result",
                          15,
                          2949,
                          100,
                          v11);
        }
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, "%s: send EAGAIN ", "send_api_result");
        V_UNLOCK();
        result = (int *)zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/b"
                          "uild/godminer-origin_godminer-new/api_new.c",
                          137,
                          "send_api_result",
                          15,
                          2945,
                          20,
                          v11);
        v3 = (int)n <= 0 || v16 > 2;
        v21 = v3;
      }
    }
  }
  return result;
}
