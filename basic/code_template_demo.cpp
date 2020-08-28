// Copyright 2019 Google Inc
// License BSD
// Author: wangyong
// This is c plus test

#ifndef BASE_EVENT_LOOP_H_
#define BASE_EVENT_LOOP_H_

class Channel;

namespace mynamespace {
    class EventLoop : {
    public:
        typedef vector<int> IntVector;
        enum UrlTableErrors {
            ERROR_OUT_OF_MEMORY = 0,
            ERROR_MALFORMED_INPUT,
        };

        explicit EventLoop(const int xx);

        void Add(const std::string &input, Channel *output)

    private:
        const int kDaysInweek = 7;
        int num_entries_;
        int num_complateted_connections_;

    };


}


#endif

