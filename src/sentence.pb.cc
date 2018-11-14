// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sentence.proto

#include "sentence.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_sentence_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_sentence_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Token;
}  // namespace protobuf_sentence_2eproto
namespace chrome_lang_id {
class SentenceDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Sentence>
      _instance;
} _Sentence_default_instance_;
class TokenDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Token>
      _instance;
} _Token_default_instance_;
}  // namespace chrome_lang_id
namespace protobuf_sentence_2eproto {
static void InitDefaultsSentence() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::chrome_lang_id::_Sentence_default_instance_;
    new (ptr) ::chrome_lang_id::Sentence();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::chrome_lang_id::Sentence::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Sentence =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsSentence}, {
      &protobuf_sentence_2eproto::scc_info_Token.base,}};

static void InitDefaultsToken() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::chrome_lang_id::_Token_default_instance_;
    new (ptr) ::chrome_lang_id::Token();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::chrome_lang_id::Token::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Token =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsToken}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Sentence.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Token.base);
}

}  // namespace protobuf_sentence_2eproto
namespace chrome_lang_id {
bool Token_BreakLevel_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Token_BreakLevel Token::NO_BREAK;
const Token_BreakLevel Token::SPACE_BREAK;
const Token_BreakLevel Token::LINE_BREAK;
const Token_BreakLevel Token::SENTENCE_BREAK;
const Token_BreakLevel Token::BreakLevel_MIN;
const Token_BreakLevel Token::BreakLevel_MAX;
const int Token::BreakLevel_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void Sentence::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Sentence::kIdFieldNumber;
const int Sentence::kTextFieldNumber;
const int Sentence::kTokenFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Sentence::Sentence()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_sentence_2eproto::scc_info_Sentence.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:chrome_lang_id.Sentence)
}
Sentence::Sentence(const Sentence& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      token_(from.token_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  _extensions_.MergeFrom(from._extensions_);
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_id()) {
    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_text()) {
    text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.text_);
  }
  // @@protoc_insertion_point(copy_constructor:chrome_lang_id.Sentence)
}

void Sentence::SharedCtor() {
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Sentence::~Sentence() {
  // @@protoc_insertion_point(destructor:chrome_lang_id.Sentence)
  SharedDtor();
}

void Sentence::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  text_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Sentence::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Sentence& Sentence::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_sentence_2eproto::scc_info_Sentence.base);
  return *internal_default_instance();
}


void Sentence::Clear() {
// @@protoc_insertion_point(message_clear_start:chrome_lang_id.Sentence)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _extensions_.Clear();
  token_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      id_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      text_.ClearNonDefaultToEmptyNoArena();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Sentence::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:chrome_lang_id.Sentence)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string text = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_text()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .chrome_lang_id.Token token = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_token()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        if ((8000u <= tag)) {
          DO_(_extensions_.ParseField(tag, input,
              internal_default_instance(),
              &unknown_fields_stream));
          continue;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:chrome_lang_id.Sentence)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:chrome_lang_id.Sentence)
  return false;
#undef DO_
}

void Sentence::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:chrome_lang_id.Sentence)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string id = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->id(), output);
  }

  // optional string text = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->text(), output);
  }

  // repeated .chrome_lang_id.Token token = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->token_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3,
      this->token(static_cast<int>(i)),
      output);
  }

  // Extension range [1000, 536870912)
  _extensions_.SerializeWithCachedSizes(
      1000, 536870912, output);

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:chrome_lang_id.Sentence)
}

size_t Sentence::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chrome_lang_id.Sentence)
  size_t total_size = 0;

  total_size += _extensions_.ByteSize();

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated .chrome_lang_id.Token token = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->token_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->token(static_cast<int>(i)));
    }
  }

  if (_has_bits_[0 / 32] & 3u) {
    // optional string id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->id());
    }

    // optional string text = 2;
    if (has_text()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->text());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Sentence::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Sentence*>(&from));
}

void Sentence::MergeFrom(const Sentence& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:chrome_lang_id.Sentence)
  GOOGLE_DCHECK_NE(&from, this);
  _extensions_.MergeFrom(from._extensions_);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  token_.MergeFrom(from.token_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_id();
      id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_text();
      text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.text_);
    }
  }
}

void Sentence::CopyFrom(const Sentence& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chrome_lang_id.Sentence)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Sentence::IsInitialized() const {
  if (!_extensions_.IsInitialized()) {
    return false;
  }

  if (!::google::protobuf::internal::AllAreInitialized(this->token())) return false;
  return true;
}

void Sentence::Swap(Sentence* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Sentence::InternalSwap(Sentence* other) {
  using std::swap;
  CastToBase(&token_)->InternalSwap(CastToBase(&other->token_));
  id_.Swap(&other->id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  text_.Swap(&other->text_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  _extensions_.Swap(&other->_extensions_);
}

::std::string Sentence::GetTypeName() const {
  return "chrome_lang_id.Sentence";
}


// ===================================================================

void Token::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Token::kWordFieldNumber;
const int Token::kStartFieldNumber;
const int Token::kEndFieldNumber;
const int Token::kHeadFieldNumber;
const int Token::kTagFieldNumber;
const int Token::kCategoryFieldNumber;
const int Token::kLabelFieldNumber;
const int Token::kBreakLevelFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Token::Token()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_sentence_2eproto::scc_info_Token.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:chrome_lang_id.Token)
}
Token::Token(const Token& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  _extensions_.MergeFrom(from._extensions_);
  word_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_word()) {
    word_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.word_);
  }
  tag_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_tag()) {
    tag_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.tag_);
  }
  category_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_category()) {
    category_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.category_);
  }
  label_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_label()) {
    label_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.label_);
  }
  ::memcpy(&start_, &from.start_,
    static_cast<size_t>(reinterpret_cast<char*>(&break_level_) -
    reinterpret_cast<char*>(&start_)) + sizeof(break_level_));
  // @@protoc_insertion_point(copy_constructor:chrome_lang_id.Token)
}

void Token::SharedCtor() {
  word_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  tag_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  category_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  label_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&start_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&end_) -
      reinterpret_cast<char*>(&start_)) + sizeof(end_));
  head_ = -1;
  break_level_ = 1;
}

Token::~Token() {
  // @@protoc_insertion_point(destructor:chrome_lang_id.Token)
  SharedDtor();
}

void Token::SharedDtor() {
  word_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  tag_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  category_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  label_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Token::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Token& Token::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_sentence_2eproto::scc_info_Token.base);
  return *internal_default_instance();
}


void Token::Clear() {
// @@protoc_insertion_point(message_clear_start:chrome_lang_id.Token)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _extensions_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      word_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      tag_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000004u) {
      category_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000008u) {
      label_.ClearNonDefaultToEmptyNoArena();
    }
  }
  if (cached_has_bits & 240u) {
    ::memset(&start_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&end_) -
        reinterpret_cast<char*>(&start_)) + sizeof(end_));
    head_ = -1;
    break_level_ = 1;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Token::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:chrome_lang_id.Token)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string word = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_word()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int32 start = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_start();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &start_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int32 end = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_end();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &end_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 head = 4 [default = -1];
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_head();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &head_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string tag = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_tag()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string category = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_category()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string label = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_label()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .chrome_lang_id.Token.BreakLevel break_level = 8 [default = SPACE_BREAK];
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(64u /* 64 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::chrome_lang_id::Token_BreakLevel_IsValid(value)) {
            set_break_level(static_cast< ::chrome_lang_id::Token_BreakLevel >(value));
          } else {
            unknown_fields_stream.WriteVarint32(64u);
            unknown_fields_stream.WriteVarint32(
                static_cast< ::google::protobuf::uint32>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        if ((8000u <= tag)) {
          DO_(_extensions_.ParseField(tag, input,
              internal_default_instance(),
              &unknown_fields_stream));
          continue;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:chrome_lang_id.Token)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:chrome_lang_id.Token)
  return false;
#undef DO_
}

void Token::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:chrome_lang_id.Token)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string word = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->word(), output);
  }

  // required int32 start = 2;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->start(), output);
  }

  // required int32 end = 3;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->end(), output);
  }

  // optional int32 head = 4 [default = -1];
  if (cached_has_bits & 0x00000040u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->head(), output);
  }

  // optional string tag = 5;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->tag(), output);
  }

  // optional string category = 6;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->category(), output);
  }

  // optional string label = 7;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->label(), output);
  }

  // optional .chrome_lang_id.Token.BreakLevel break_level = 8 [default = SPACE_BREAK];
  if (cached_has_bits & 0x00000080u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      8, this->break_level(), output);
  }

  // Extension range [1000, 536870912)
  _extensions_.SerializeWithCachedSizes(
      1000, 536870912, output);

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:chrome_lang_id.Token)
}

size_t Token::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:chrome_lang_id.Token)
  size_t total_size = 0;

  if (has_word()) {
    // required string word = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->word());
  }

  if (has_start()) {
    // required int32 start = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->start());
  }

  if (has_end()) {
    // required int32 end = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->end());
  }

  return total_size;
}
size_t Token::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:chrome_lang_id.Token)
  size_t total_size = 0;

  total_size += _extensions_.ByteSize();

  total_size += _internal_metadata_.unknown_fields().size();

  if (((_has_bits_[0] & 0x00000031) ^ 0x00000031) == 0) {  // All required fields are present.
    // required string word = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->word());

    // required int32 start = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->start());

    // required int32 end = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->end());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_has_bits_[0 / 32] & 14u) {
    // optional string tag = 5;
    if (has_tag()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->tag());
    }

    // optional string category = 6;
    if (has_category()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->category());
    }

    // optional string label = 7;
    if (has_label()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->label());
    }

  }
  if (_has_bits_[0 / 32] & 192u) {
    // optional int32 head = 4 [default = -1];
    if (has_head()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->head());
    }

    // optional .chrome_lang_id.Token.BreakLevel break_level = 8 [default = SPACE_BREAK];
    if (has_break_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->break_level());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Token::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Token*>(&from));
}

void Token::MergeFrom(const Token& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:chrome_lang_id.Token)
  GOOGLE_DCHECK_NE(&from, this);
  _extensions_.MergeFrom(from._extensions_);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 255u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_word();
      word_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.word_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_tag();
      tag_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.tag_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_category();
      category_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.category_);
    }
    if (cached_has_bits & 0x00000008u) {
      set_has_label();
      label_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.label_);
    }
    if (cached_has_bits & 0x00000010u) {
      start_ = from.start_;
    }
    if (cached_has_bits & 0x00000020u) {
      end_ = from.end_;
    }
    if (cached_has_bits & 0x00000040u) {
      head_ = from.head_;
    }
    if (cached_has_bits & 0x00000080u) {
      break_level_ = from.break_level_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Token::CopyFrom(const Token& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:chrome_lang_id.Token)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Token::IsInitialized() const {
  if (!_extensions_.IsInitialized()) {
    return false;
  }

  if ((_has_bits_[0] & 0x00000031) != 0x00000031) return false;
  return true;
}

void Token::Swap(Token* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Token::InternalSwap(Token* other) {
  using std::swap;
  word_.Swap(&other->word_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  tag_.Swap(&other->tag_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  category_.Swap(&other->category_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  label_.Swap(&other->label_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(start_, other->start_);
  swap(end_, other->end_);
  swap(head_, other->head_);
  swap(break_level_, other->break_level_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  _extensions_.Swap(&other->_extensions_);
}

::std::string Token::GetTypeName() const {
  return "chrome_lang_id.Token";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace chrome_lang_id
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::chrome_lang_id::Sentence* Arena::CreateMaybeMessage< ::chrome_lang_id::Sentence >(Arena* arena) {
  return Arena::CreateInternal< ::chrome_lang_id::Sentence >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::chrome_lang_id::Token* Arena::CreateMaybeMessage< ::chrome_lang_id::Token >(Arena* arena) {
  return Arena::CreateInternal< ::chrome_lang_id::Token >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
