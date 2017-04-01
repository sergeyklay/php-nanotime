# The nanotime

[![Build Status](https://secure.travis-ci.org/sergeyklay/php-nanotime.svg)](http://travis-ci.org/sergeyklay/php-nanotime)

PHP bindings for [libnanotime](https://github.com/lstrojny/nanotime.git) for nanosecond precision timestamps.

Supported PHP versions:

- **5.4**
- **5.5**
- **5.6**
- **7.0**
- **7.1**

## Usage

```php
# PHP 7.x example
use function nano\{
    second as nanosecond,
    time as nanotime
};

$currentNanoSecond = nanosecond(); // int(1381843170058990080)
$currentTimestampWithNanoSecondPrecision = nanotime(); // float(1381843170.059027910232543945312)
```

## License

The nanotime is open source software licensed under the MIT License. See the LICENSE file for more.<br>
Copyright (c) 2013 Lars Strojny<br>
Copyright (c) 2017 Serghei Iakovlev<br>
