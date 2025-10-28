void __fastcall sub_2787F0(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        void *ptr,
        char *a9,
        int a10,
        char a11)
{
  if ( a9 != &a11 )
    sub_339E8C(a9);
  if ( ptr )
    free(ptr);
  JUMPOUT(0x2787CC);
}
