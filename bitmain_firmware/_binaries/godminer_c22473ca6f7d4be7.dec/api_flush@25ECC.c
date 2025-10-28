int *api_flush()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r2
  int v2; // r1
  _QWORD *v3; // r12
  int *result; // r0
  _QWORD *v5; // r3

  LOWORD(v0) = -14196;
  HIWORD(v0) = (unsigned int)&unk_16C794 >> 16;
  LOWORD(v1) = -14200;
  LOWORD(v2) = -14236;
  HIWORD(v1) = (unsigned int)&unk_16C790 >> 16;
  *v0 = 0;
  HIWORD(v2) = (unsigned int)&stru_16C764.__owner >> 16;
  LOWORD(v0) = -14232;
  *(_DWORD *)v2 = 0;
  HIWORD(v0) = (unsigned int)&stru_16C764.__kind >> 16;
  *v1 = 0;
  LOWORD(v2) = 20424;
  LOWORD(v1) = -14240;
  *v0 = 0;
  HIWORD(v2) = (unsigned int)&unk_164EB0 >> 16;
  HIWORD(v1) = (unsigned int)&stru_16C764.__count >> 16;
  LOWORD(v0) = -14272;
  *v1 = 0;
  HIWORD(v0) = (unsigned int)&http_test_case >> 16;
  *(_DWORD *)(v2 + 0x24) = 0;
  *(_QWORD *)v0 = 0;
  LOWORD(v0) = -14224;
  *(_QWORD *)(v2 + 0x30) = 0;
  HIWORD(v0) = (unsigned int)&stru_16C764.__spins >> 16;
  *(_QWORD *)(v2 + 0x28) = 0;
  *(_QWORD *)v0 = 0;
  *(_QWORD *)&total_discarded = 0;
  LOWORD(v3) = -14216;
  LOWORD(v2) = -14192;
  LOWORD(result) = -14184;
  HIWORD(v2) = (unsigned int)&unk_16C798 >> 16;
  HIWORD(v3) = (unsigned int)dword_16C780 >> 16;
  HIWORD(result) = (unsigned int)&unk_16C7A0 >> 16;
  *(_QWORD *)v2 = 0;
  *v3 = 0;
  LOWORD(v2) = -14264;
  *(_QWORD *)result = 0;
  LOWORD(v1) = -14248;
  LOWORD(v5) = -14208;
  HIWORD(v2) = (unsigned int)&g_zc >> 16;
  HIWORD(v1) = (unsigned int)&dword_16C760 >> 16;
  HIWORD(v5) = (unsigned int)&unk_16C788 >> 16;
  *(_QWORD *)v2 = 0;
  *(_QWORD *)v1 = 0;
  *v5 = 0;
  return result;
}
