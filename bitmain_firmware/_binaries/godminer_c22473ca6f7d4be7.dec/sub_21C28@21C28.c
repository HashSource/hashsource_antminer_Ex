int __fastcall sub_21C28(int a1, void *(*a2)(void *))
{
  pthread_attr_t *v2; // r4
  int v5; // r5

  v2 = (pthread_attr_t *)(a1 + 8);
  pthread_attr_init((pthread_attr_t *)(a1 + 8));
  v5 = pthread_create((pthread_t *)(a1 + 4), v2, a2, (void *)a1);
  pthread_attr_destroy(v2);
  return v5;
}
