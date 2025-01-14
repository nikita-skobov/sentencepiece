#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SentencePieceProcessor SentencePieceProcessor;

typedef struct SentencePieceText SentencePieceText;

int spp_decode_piece_ids(SentencePieceProcessor *spp, uint32_t const *pieces, size_t pieces_len, unsigned char **decoded, size_t *decoded_len);

unsigned char *spp_encode_as_serialized_proto(SentencePieceProcessor *spp, char const *sentence, size_t sentence_len, size_t *len);

SentencePieceProcessor *spp_new();

int spp_from_serialized_proto(SentencePieceProcessor *spp, char const *data, size_t len);

int spp_load(SentencePieceProcessor *spp, char const *filename);

void spp_free(SentencePieceProcessor *spp);

int spp_bos_id(SentencePieceProcessor *spp);

int spp_eos_id(SentencePieceProcessor *spp);

bool spp_is_unknown(SentencePieceProcessor *spp, int id);

int spp_piece_to_id(SentencePieceProcessor *spp, char const *piece);

int spp_unknown_id(SentencePieceProcessor *spp);

#ifdef __cplusplus
}
#endif
