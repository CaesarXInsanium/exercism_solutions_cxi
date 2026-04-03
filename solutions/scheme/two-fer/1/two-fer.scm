(import (rnrs)
	(rnrs base))
;;; is really just a simple to say, if there is a name then we merely add that?
(define (return x) x)
(define (two-fer . maybe-name)
  (if (null? maybe-name)
      (return "One for you, one for me.")
      (return (string-append "One for " (car maybe-name) ", one for me."))))

